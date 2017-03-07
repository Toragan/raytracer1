/*
** calc_dir_vector.c for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1/src
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Mon Feb 20 12:22:03 2017 Gaumont Thomas
** Last update Tue Mar  7 11:25:03 2017 Gaumont Thomas
*/

#include	<SFML/Graphics.h>

sfVector3f	calc_dir_vector(sfVector2i screen_size, sfVector2i screen_pos)
{
  sfVector3f	dir;

  dir.x = 500;
  dir.y = (screen_size.x / 2) - screen_pos.x;
  dir.z = (screen_size.y / 2) - screen_pos.y;
  return (dir);
}
