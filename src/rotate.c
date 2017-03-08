/*
** rotate_xyz.c for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1/src/translate_rotate
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Fri Feb 24 21:35:53 2017 Gaumont Thomas
** Last update Wed Mar  8 09:43:23 2017 Gaumont Thomas
*/

#include	"raytracer1.h"

sfVector3f	rotate_xyz(sfVector3f to_rotate, sfVector3f angles)
{
  sfVector3f	coord;
  sfVector3f	coord1;

  angles.x = angles.x * M_PI / 180;
  angles.y = angles.y * M_PI / 180;
  angles.z = angles.z * M_PI / 180;
  coord.x = to_rotate.x;
  coord.y = (cos(angles.x) * to_rotate.y) + (-sin(angles.x) * to_rotate.z);
  coord.z = (sin(angles.x) * to_rotate.y) + (cos(angles.x) * to_rotate.z);
  coord1.x = (cos(angles.y) * coord.x) + (sin(angles.y) * coord.z);
  coord1.y = coord.y;
  coord1.z = (sin(angles.y) * coord.x) + (cos(angles.y) * coord.z);
  coord.x = (cos(angles.z) * coord1.x) + (-sin(angles.z) * coord1.y);
  coord.y = (sin(angles.z) * coord1.x) + (cos(angles.z) * coord1.y);
  coord.z = coord1.z;
  return (coord);
}

sfVector3f	rotate_zyx(sfVector3f to_rotate, sfVector3f angles)
{
  sfVector3f	coord;
  sfVector3f	coord1;

  angles.x = angles.x * M_PI / 180;
  angles.y = angles.y * M_PI / 180;
  angles.z = angles.z * M_PI / 180;
  coord.x = (cos(angles.z) * to_rotate.x) + (-sin(angles.z) * to_rotate.y);
  coord.y = (sin(angles.z) * to_rotate.x) + (cos(angles.z) * to_rotate.y);
  coord.z = to_rotate.z;
  coord1.x = (cos(angles.y) * coord.x) + (sin(angles.y) * coord.z);
  coord1.y = coord.y;
  coord1.z = (sin(angles.y) * coord.x) + (cos(angles.y) * coord.z);
  coord.x = coord1.x;
  coord.y = (cos(angles.x) * coord1.y) + (-sin(angles.x) * coord1.z);
  coord.z = (sin(angles.x) * coord1.y) + (cos(angles.x) * coord1.z);
  return (coord);
}
