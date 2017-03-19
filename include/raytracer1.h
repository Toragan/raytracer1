/*
** raytracer1.h for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Tue Mar  7 14:02:48 2017 Gaumont Thomas
** Last update Sun Mar 19 23:16:56 2017 Gaumont Thomas
*/

#include	<SFML/Graphics.h>
#include	<math.h>

#ifndef RAYTRACER1_H_
# define RAYTRACER1_H_

sfVector3f	calc_dir_vector(float, sfVector2i, sfVector2i);
sfVector3f	translate(sfVector3f to_translate, sfVector3f translations);
sfVector3f	rotate_xyz(sfVector3f to_rotate, sfVector3f angles);
sfVector3f	rotate_zyx(sfVector3f to_rotate, sfVector3f angles);
sfVector3f	get_normal_sphere(sfVector3f intersection_point);
sfVector3f	get_normal_plane(int upward);
sfVector3f	get_normal_cylinder(sfVector3f intersection_point);
sfVector3f	get_normal_cone(sfVector3f intersection_point, float semiangle);
float		intersect_sphere(sfVector3f, sfVector3f, float);
float		intersect_cylinder(sfVector3f, sfVector3f, float);
float		intersect_cone(sfVector3f, sfVector3f, float);
float		intersect_plane(sfVector3f eye_pos, sfVector3f dir_vector);
float		get_light_coef(sfVector3f, sfVector3f);

#endif /* !RAYTRACER1_H_ */
