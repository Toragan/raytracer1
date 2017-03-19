/*
** cone.c for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1/src
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Tue Mar  7 14:21:24 2017 Gaumont Thomas
** Last update Sun Mar 19 23:11:02 2017 Gaumont Thomas
*/

#include	"raytracer1.h"

float		delta_cone(float a, float b, float delta)
{
  float		k1;
  float		k2;

  if (delta > 0)
    {
      k1 = ((- b) + sqrt(delta)) / (2 * a);
      k2 = ((- b) - sqrt(delta)) / (2 * a);
      if (k1 < 0 && k2 < 0)
	return (-1);
      if (k1 < 0)
	return (k2);
      if (k2 < 0)
	return (k1);
      if (k2 <= k1)
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
  float		s;
  float		delta;

  s = (90 - semiangle) * (M_PI / 180);
  if (s == 0)
    return (-1);
  a = powf(dir_vector.x, 2) + powf(dir_vector.y, 2) -
    (powf(dir_vector.z, 2) / powf(tanf(s), 2));
  b = 2 * ((eye_pos.x * dir_vector.x) + (dir_vector.y * eye_pos.y)) -
    2 * ((dir_vector.z * eye_pos.z) / powf(tanf(s), 2));
  c = (powf(eye_pos.x, 2) + powf(eye_pos.y, 2)) -
    (powf(eye_pos.z, 2) / powf(tanf(s), 2));
  delta = powf(b, 2) - (4 * a * c);
  if (delta > 0 || delta < 0)
    return (delta_cone(a, b, delta));
  delta = b / (2 * a);
  if (delta < 0)
    return (-1.0f);
  return (delta);
}

sfVector3f	get_normal_cone(sfVector3f intersection_point, float semiangle)
{
  semiangle = (semiangle * M_PI) / 180;
  semiangle = -tan(semiangle);
  intersection_point.z = intersection_point.z * semiangle;
  return (intersection_point);
}
