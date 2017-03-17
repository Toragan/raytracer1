/*
** intersect_cylinder.c for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1/src
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Tue Mar  7 13:31:07 2017 Gaumont Thomas
** Last update Fri Mar 17 09:42:07 2017 Gaumont Thomas
*/

#include	"raytracer1.h"

float		delt(float a, float b, float k)
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

float		intersect_cylinder(sfVector3f eye_pos,
				   sfVector3f dir_vector, float radius)
{
  float		a;
  float		b;
  float		c;
  float		delta;

  a = pow(dir_vector.x, 2) + pow(dir_vector.y, 2);
  b = 2 * ((eye_pos.x * dir_vector.x) + (dir_vector.y * eye_pos.y));
  c = pow(eye_pos.x, 2) + pow(eye_pos.y, 2) - pow(radius, 2);
  delta = pow(b, 2) - (4 * a * c);
  delta = delt(a, b, delta);
  return (delta);
}

sfVector3f	get_normal_cylinder(sfVector3f intersection_point)
{
  sfVector3f	coord;

  coord.x = intersection_point.x;
  coord.y = 0;
  coord.z = intersection_point.z;
  return (coord);
}
