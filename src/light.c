/*
** light.c for raytracer1 in /home/gaumon_t/delivery/Infographie/raytracer1/src
**
** Made by Gaumont Thomas
** Login   <gaumon_t@epitech.net>
**
** Started on  Fri Mar 17 09:19:01 2017 Gaumont Thomas
** Last update Sun Mar 19 23:12:27 2017 Gaumont Thomas
*/

#include	"raytracer1.h"

float		calcul_vec(sfVector3f vector)
{
  vector.x = sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vector.z, 2));
  return (vector.x);
}

float		calcul_vec_two(sfVector3f v_l, sfVector3f v_n)
{
  float		value;

  value = (v_l.x * v_n.x) + (v_l.y * v_n.y) + (v_l.z * v_n.z);
  return (value);
}

float		get_light_coef(sfVector3f light_vector, sfVector3f normal_vector)
{
  float		a;
  float		light;
  float		vect;

  light = calcul_vec(light_vector);
  vect = calcul_vec(normal_vector);
  light_vector.x = light_vector.x / light;
  light_vector.y = light_vector.y / light;
  light_vector.z = light_vector.z / light;
  normal_vector.x = normal_vector.x / vect;
  normal_vector.y = normal_vector.y / vect;
  normal_vector.z = normal_vector.z / vect;
  a = calcul_vec_two(light_vector, normal_vector);
  if (a > 0)
    return (a);
  return (0);
}
