# include <iostream>
# include <string>

auto ask_user_for_integer ( std :: string const prompt ) -> int {
    if ( not prompt . empty ()) {
        std :: cout << prompt ;
    }
    auto value = std :: string {};
    std :: getline ( std :: cin , value );
    return std :: stoi ( value );
}
int main()
{
    int a = ask_user_for_integer("Podaj a: ");
    int b = ask_user_for_integer("Podaj b: ");

    if (a<b)
    {
        std::cout << "Liczba " << b << " jest wieksza\n";
    }
    else if(b<a)
    {
        std::cout << "Liczba " << a << "jest wieksza\n";
    }
    else
    {
        std::cout << "Liczby są sobie równe\n";
    }
    return 0;
}
