/*
** raytracer1.h for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Tue Mar  7 14:02:48 2017 Gaumont Thomas
** Last update Fri Mar 17 09:43:19 2017 Gaumont Thomas
*/

#include	<SFML/Graphics.h>
#include	<math.h>

#ifndef RAYTRACER1_H_
# define RAYTRACER1_H_

sfVector3f	calc_dir_vector(float dist_to_plane,
				sfVector2i screen_size, sfVector2i screen_pos);
sfVector3f	translate(sfVector3f to_translate, sfVector3f translations);
sfVector3f	rotate_xyz(sfVector3f to_rotate, sfVector3f angles);
sfVector3f	rotate_zyx(sfVector3f to_rotate, sfVector3f angles);
float		intersect_plane(sfVector3f eye_pos, sfVector3f dir_vector);
float		intersect_sphere(sfVector3f eye_pos, sfVector3f dir_vector,
				 float radius);
float		intersect_cylinder(sfVector3f eye_pos, sfVector3f dir_vector,
				   float radius);
float		intersect_cone(sfVector3f eye_pos, sfVector3f dir_vector,
			       float semiangle);
sfVector3f	get_normal_sphere(sfVector3f intersection_point);
sfVector3f	get_normal_plane(int upward);
sfVector3f	get_normal_cylinder(sfVector3f intersection_point);
sfVector3f	get_normal_cone(sfVector3f intersection_point, float semiangle);

#endif /* !RAYTRACER1_H_ */
