#include <iostream>
#include <sstream>

void print(std::stringstream & s, std::string line)
{
	std::cout << line << std::endl;

	std::string::size_type n = 0;
	while (std::string::npos != (n = line.find("\\", n)))
	{
		line.replace(n, 1, "\\\\");
		n += 2;
	}
	n = 0;
	while (std::string::npos != (n = line.find("\"", n)))
	{
		line.replace(n, 1, "\\\"");
		n += 2;
	}

	s << "	print(s, " << static_cast<char>(34) << line << static_cast<char>(34) << ");" << std::endl;
}

void print_mid(const std::stringstream & s)
{
	std::cout << s.str();
	std::cout << "	print_mid(s);" << std::endl;
}

void print_end()
{
	std::cout << "	print_end();" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "	return 0;" << std::endl;
	std::cout << "}" << std::endl;
}

int main(const int argc, char * argv[])
{
	std::stringstream s;

	print(s, "#include <iostream>");
	print(s, "#include <sstream>");
	print(s, "");
	print(s, "void print(std::stringstream & s, std::string line)");
	print(s, "{");
	print(s, "	std::cout << line << std::endl;");
	print(s, "");
	print(s, "	std::string::size_type n = 0;");
	print(s, "	while (std::string::npos != (n = line.find(\"\\\\\", n)))");
	print(s, "	{");
	print(s, "		line.replace(n, 1, \"\\\\\\\\\");");
	print(s, "		n += 2;");
	print(s, "	}");
	print(s, "	n = 0;");
	print(s, "	while (std::string::npos != (n = line.find(\"\\\"\", n)))");
	print(s, "	{");
	print(s, "		line.replace(n, 1, \"\\\\\\\"\");");
	print(s, "		n += 2;");
	print(s, "	}");
	print(s, "");
	print(s, "	s << \"	print(s, \" << static_cast<char>(34) << line << static_cast<char>(34) << \");\" << std::endl;");
	print(s, "}");
	print(s, "");
	print(s, "void print_mid(const std::stringstream & s)");
	print(s, "{");
	print(s, "	std::cout << s.str();");
	print(s, "	std::cout << \"	print_mid(s);\" << std::endl;");
	print(s, "}");
	print(s, "");
	print(s, "void print_end()");
	print(s, "{");
	print(s, "	std::cout << \"	print_end();\" << std::endl;");
	print(s, "	std::cout << \"\" << std::endl;");
	print(s, "	std::cout << \"	return 0;\" << std::endl;");
	print(s, "	std::cout << \"}\" << std::endl;");
	print(s, "}");
	print(s, "");
	print(s, "int main(const int argc, char * argv[])");
	print(s, "{");
	print(s, "	std::stringstream s;");
	print(s, "");
	print_mid(s);
	print_end();

	return 0;
}