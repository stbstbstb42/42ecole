#include "miniRT.h"

t_v3	sub_vec(t_v3 v1, t_v3 v2)
{
	t_v3	ret;

	ret.x = v1.x - v2.x;
	ret.y = v1.y - v2.y;
	ret.z = v1.z - v2.z;
	return (ret);
}

t_v3	mult_vec(t_v3 v1, t_v3 v2)
{
	t_v3	ret;

	ret.x = v1.x * v2.x;
	ret.y = v1.y * v2.y;
	ret.z = v1.z * v2.z;
	return (ret);
}

t_v3	div_vec(t_v3 v1, t_v3 v2)
{
	t_v3	ret;

	ret.x = v1.x / v2.x;
	ret.y = v1.y / v2.y;
	ret.z = v1.z / v2.z;
	return (ret);
}

t_v3	div_vec_n(t_v3 v1, float d)
{
	t_v3	ret;

	ret.x = v1.x / d;
	ret.y = v1.y / d;
	ret.z = v1.z / d;
	return (ret);
}

t_v3	mult_vec_n(t_v3 v1, float d)
{
	t_v3	ret;

	ret.x = v1.x * d;
	ret.y = v1.y * d;
	ret.z = v1.z * d;
	return (ret);
}
