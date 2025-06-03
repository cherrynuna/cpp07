#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename Func>
void iter(T* array, int len, Func f)
{
	for (int i = 0; i < len; ++i)
		f(array[i]);
}

#endif