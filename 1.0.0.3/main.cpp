# include <iostream>
# include <string>

auto ask_user_for_integer ( std :: string const prompt ) -> int
{
    if ( not prompt . empty ()) {
    std :: cout << prompt ;
    }
    auto value = std :: string {};
    std :: getline ( std :: cin , value );
    return std :: stoi ( value );
}
int main()
{
    int wynik = ask_user_for_integer("Podaj A: ") * ask_user_for_integer("Podaj B: ");
    std::cout << "Wynik: " << wynik << "\n" ;
    return 0;
}
