/*
** raytracer1.h for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Tue Mar  7 14:02:48 2017 Gaumont Thomas
** Last update Tue Mar  7 14:14:00 2017 Gaumont Thomas
*/

#include	<SFML/Graphics.h>
#include	<math.h>

#ifndef RAYTRACER1_H_
# define RAYTRACER1_H_

sfVector3f	calc_dir_vector(float dist_to_plane,
				sfVector2i screen_size, sfVector2i screen_pos);

sfVector3f	translate(sfVector3f to_translate, sfVector3f translations);

float		intersect_plane(sfVector3f eye_pos, sfVector3f dir_vector);
float		intersect_sphere(sfVector3f eye_pos, sfVector3f dir_vector,
				 float radius);
sfVector3f	get_normal_sphere(sfVector3f intersection_point);

#endif /* !RAYTRACER1_H_ */
