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
    int a = ask_user_for_integer("Podaj liczbe a ");
    int b = ask_user_for_integer("Podaj liczbe b ");
    int c = ask_user_for_integer("Podaj liczbe c ");

    if ((a>b) && (a>c))
    {
        std::cout << "Najwieksza liczba to " << a << "\n";
    }
    else if ((b>a) && (b>c))
    {
        std::cout << "Najwieksza liczba to " << b << "\n";
    }
    else if ((c>a) && (c>b))
    {
        std::cout << "Najwieksza liczba to " << c << "\n";
    }

return 0;
}
