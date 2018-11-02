#include <iostream>

int main(int ac, char **av)
{
	for (int i = 0; i < ac; ++i)
		std::cout << "Arg[" << i << "]: " << av[i] << std::endl;
	return 0;
}
