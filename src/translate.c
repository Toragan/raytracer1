/*
** translate.c for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1/src
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Fri Feb 24 21:29:53 2017 Gaumont Thomas
** Last update Tue Mar  7 14:02:03 2017 Gaumont Thomas
*/

#include	"raytracer1.h"

sfVector3f	translate(sfVector3f to_translate, sfVector3f translations)
{
  sfVector3f	coord;

  coord.x = to_translate.x + translations.x;
  coord.y = to_translate.y + translations.y;
  coord.z = to_translate.z + translations.z;
  return (coord);
}
