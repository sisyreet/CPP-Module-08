#include <iostream>
#include <fstream>
#include <string>

void	error_message(std::string msg)
{
	std::cerr << msg << std::endl;
	exit(1);
}

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
	{
		std::cout << "Usage: ./replace <filename> [line 1] [line 2]\n";
		return (1);
	}

	std::string line;
	std::string	temp;
	std::string str1;
	std::string	str2;
	size_t		pos;


	str1 = argv[2];							//переводим в стринг, 
	str2 = argv[3];							//потому что методы стринг не работают с чаром
	if (!str1.length() || !str2.length())
		error_message("nope!");
	std::string newFileName = argv[1];
	newFileName.append(".replase");
	
	std::ifstream ifs(argv[1], std::ios::in);	//файловый поток для чтения из файла(имя файла, вход. поток) 
	if (ifs.is_open())
	{	
		while (std::getline(ifs, line, '\n'))
		{
			temp.append(line);
			temp.append("\n");
		}
		ifs.close();
		std::ofstream ofs(newFileName);
		if (!ofs)
			error_message("Cannot create file!");
		pos = 0;
		while ((pos = temp.find(str1, pos)) != std::string::npos)	//ищем стр1 до конца строки
		{
			temp.erase(pos, str1.length());
			temp.insert(pos, str2);
			pos += str2.length();
		}
		ofs << temp;
		ofs.close();
	}
	else
		error_message("No such file or permission denied!");
	return 0;
}