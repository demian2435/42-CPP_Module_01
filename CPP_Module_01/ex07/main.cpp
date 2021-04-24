#include <string>
#include <iostream>
#include <fstream>

int			main(int argc, char **argv){

	std::string s1;
	std::string s2;
	std::string file_name;
	std::string buffer;
	std::ifstream file_in;
	std::string testo_file;
	std::ofstream file_out;

	size_t pos;

	if (argc != 4)
	{
		std::cout << "Numero errato di argomenti" << std::endl;
		return (0);
	}
	if (argv[2][0] == 0 || argv[3][0] == 0)
	{
		std::cout << "Stringa vuota" << std::endl;
		return (0);
	}
	file_name = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	file_in.open(file_name.c_str());
	if (!file_in)
	{
		std::cout << "Il file " << file_name << " non esiste" << std::endl;
		return (0);
	}
	while (getline(file_in, buffer))
		testo_file.append(buffer + "\n");
	testo_file.resize(testo_file.length() - 1);
	file_in.close();
	file_name = file_name.append(".replace");
	pos = 0;
	while ((pos = testo_file.find(s1, pos)) != std::string::npos)
		testo_file.replace(pos, s1.length(), s2);
	file_out.open(file_name.c_str());
	if (!file_out)
	{
		std::cout << "Errore fatale durante la creazione del file " << file_name << std::endl;
		return (0);
	}
	file_out << testo_file;
	file_out.close();
	return(0);
}
