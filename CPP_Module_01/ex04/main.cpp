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
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3]) // проверка аргументов
		std::cout << "Usage: ./replace <filename> [line 1] [line 2]\n";

	std::string line;
	std::string	temp;
	std::string str1;
	std::string	str2;
	size_t		pos;


	str1 = argv[2];							//переводим в стринг, 
	str2 = argv[3];							//потому что методы стринг не работают с чаром
	if (!str1.length() || !str2.length())
		error_message("nope!");
	std::string newFileName = argv[1];		//копирую имя файла
	newFileName.append(".replase");			//добавляю к нему свое расширение
	
	std::ifstream ifs(argv[1], std::ios::in);	//файловый поток для чтения из файла(имя файла, вход. поток) 
	if (ifs.is_open())							//проверяю открылся ли файл из аргументов
	{	
		while (std::getline(ifs, line, '\n'))	//лепим все строки из файла в одну
		{
			temp.append(line);
			temp.append("\n");
		}
		ifs.close();							//закрываем файловый поток, он нам больше не нужен
		std::ofstream ofs(newFileName);	//создаю файл со своим именем
		if (!ofs)							//проверка получилось ли
			error_message("Cannot create file!");
		pos = 0;
		while ((pos = temp.find(str1, pos)) != std::string::npos)	//ищем стр1 до конца строки
		{
			temp.erase(pos, str1.length());		//стираеми искомое
			temp.insert(pos, str2);				//вставляем стр2
			pos += str2.length();				//перепрыгиваем через замененную часть
		}
		ofs << temp;							//отправляем буфер в исходящий файловый поток (в файл)
		ofs.close();							//
	}
	else
		error_message("No such file or permission denied!");
	return 0;
}