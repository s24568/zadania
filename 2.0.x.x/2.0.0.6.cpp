#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt . empty ())	{
		std::cout << prompt;
	}
	auto value = std::string{};
	std:getline(std::cin, value);
	return std:: stoi (value);
}

int main()
{
    int a = ask_user_for_integer("Podaj a: "); 
	int b = ask_user_for_integer("Podaj b: ");
    int c = ask_user_for_integer("Podaj c: "); 
	int d = ask_user_for_integer("Podaj d: ");
    int e = ask_user_for_integer("Podaj e: "); 
	int f = ask_user_for_integer("Podaj f: ");

    if(a==b)
    {
        std::cout << "Liczba " << a << " jest równa " << b << ".\n";
    }
    else
    {
        std::cout << "Liczba " << a << " nie jest równa " << b << ".\n";
    }
    if(a>c)
    {
        std::cout << "Liczba " << a << " jest wieksza od " << c << ".\n";
    }
    else
    {
        std::cout << "Liczba " << a << " nie jest większa od " << c << ".\n";
    }
    if(a<d)
    {
        std::cout << "Liczba " << a << " jest mniejsza od " << d << ".\n";
    }
    else
    {
        std::cout << "Liczba " << a << " nie jest mniejsza od " << d << ".\n";
    }
    if(a<e)
    {
        std::cout << "Liczba " << a << " jest mniejsza od " << e << ".\n";
    }
    else
    {
        std::cout << "Liczba " << a << " nie jest mniejsza od " << e << ".\n";
    }
    if(a>f)
    {
        std::cout << "Liczba " << a << " jest wieksza od " << f << ".\n";
    }
    else
    {
        std::cout << "Liczba " << a << " nie jest większa od " << f << ".\n";
    }
return 0;
}
