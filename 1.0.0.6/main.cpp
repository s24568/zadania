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
    int a = ask_user_for_integer("Podaj wartosc a: ");
    int b = ask_user_for_integer("Podaj wartosc b: ");

    if(a==b)
    {
        std::cout << "Liczby s¹ rowne 2\n";
    }
    else if(a<b)
    {
        std::cout << "Liczba: " << a << " jest mniejsza ni¿ " << b << "\n";
    }
    else if(a>b)
    {
        std::cout << "Liczba " << a << " jest wieksza ni¿ " << b << "\n";
    }
    else
    {
        std::cout << "Liczby nie naleza do zadnego zbioru\n";
    }
return 0;
}
