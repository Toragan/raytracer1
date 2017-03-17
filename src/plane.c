/*
** intersect_plane.c for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1/src
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Tue Mar  7 13:24:28 2017 Gaumont Thomas
** Last update Fri Mar 17 09:57:42 2017 Gaumont Thomas
*/

#include	"raytracer1.h"

float		intersect_plane(sfVector3f eye_pos, sfVector3f dir_vector)
{
  float		k;

  k = (- eye_pos.z) / dir_vector.z;
  if (dir_vector.z == 0 || k < 0)
    return (-1);
  return (k);
}

sfVector3f	get_normal_plane(int upward)
{
  sfVector3f	coord;

  coord.x = 0;
  coord.y = 0;
  if (upward == 1)
    coord.z = 1;
  else if (upward == 0)
    coord.z = - 1;
  return (coord);
}
