/*
** cone.c for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1/src
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Tue Mar  7 14:21:24 2017 Gaumont Thomas
** Last update Fri Mar 17 10:02:02 2017 Gaumont Thomas
*/

#include	"raytracer1.h"

float		delta_cone(float a, float b, float k)
{
  float		k1;
  float		k2;

  if (k == 0)
    {
      k1 = (- b) / (2 * a);
      if (k1 >= 0)
	return (k1);
    }
  else if (k > 0)
    {
      k1 = ((- b) + sqrt(k)) / (2 * a);
      k2 = ((- b) - sqrt(k)) / (2 * a);
      if (k1 < 0 && k2 < 0)
	return (-1);
      if (k1 < 0)
	return (k2);
      if (k2 < 0)
	return (k1);
      if (k1 > k2)
	return (k2);
      else
	return (k1);
    }
  return (-1);
}

float		intersect_cone(sfVector3f eye_pos, sfVector3f dir_vector,
			       float semiangle)
{
  float		a;
  float		b;
  float		c;
  float		tang;
  float		delta;

  semiangle = (semiangle * M_PI) / 180;
  tang = pow(tan(semiangle), 2);
  a = pow(dir_vector.x, 2) + pow(dir_vector.y, 2) -
    (pow(dir_vector.z, 2) * tang);
  b = 2 * ((eye_pos.x * dir_vector.x) + (dir_vector.y * eye_pos.y) -
	   ((dir_vector.z * eye_pos.z) * tang));
  c = pow(eye_pos.x, 2) + pow(eye_pos.y, 2) - (pow(eye_pos.z, 2) * tang);
  delta = pow(b, 2) - (4 * a * c);
  delta = delta_cone(a, b, delta);
  return (delta);
}

sfVector3f	get_normal_cone(sfVector3f intersection_point, float semiangle)
{
  sfVector3f	coord;

  semiangle = (semiangle * M_PI) / 180;
  coord.x = intersection_point.x * semiangle
  coord.y = intersection_point.y;
  coord.z = 0
  return (coord);
}
