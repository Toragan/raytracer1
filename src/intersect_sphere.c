/*
** intersect_sphere.c for raytracer in /home/gaumon_t/delivery/Infographie/raytracer1/src
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Mon Feb 20 12:28:30 2017 Gaumont Thomas
** Last update Tue Mar  7 13:19:56 2017 Gaumont Thomas
*/

#include	<SFML/Graphics.h>
#include	<math.h>

float		intersect_sphere(sfVector3f eye_pos, sfVector3f dir_vector,
				 float radius)
{
  float		a;
  float		b;
  float		c;
  float		k;
  float		k1;
  float		k2;

  a = pow(dir_vector.x, 2) + pow(dir_vector.y, 2) + pow(dir_vector.z, 2);
  b = 2 * ((eye_pos.x * dir_vector.x) + (eye_pos.y * dir_vector.y) +
	   (eye_pos.z * dir_vector.z));
  c = pow(eye_pos.x, 2) + pow(eye_pos.y, 2) +
    pow(eye_pos.z, 2) - pow(radius, 2);
  k = pow(b, 2) - (4 * a * c);
  if (k < 0)
    return (-1);
  else if (k == 0)
    {
      k1 = (- b) / (2 * a);
      return (k1);
    }
  else if (k > 0)
    {
      k1 = ((- b) + sqrt(k)) / (2 * a);
      k2 = ((- b) - sqrt(k)) / (2 * a);
      if (k1 < 0 && k2 < 0)
	return (-1);
      else if (k1 > k2)
	return (k2);
      else
	return (k1)
    }
  return (-1);
}
