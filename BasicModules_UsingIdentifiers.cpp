
import std;
import GitHub_Repository_As_Namespace;
import Run;

auto main(int argc, char* argv[] ) -> int
{
    auto run { std::make_unique<Run::App> ( 
        argc == 2 ? std::string{argv [ 1 ] } : std::string{} ) };

    std::println ( "{}", run->ToString ( ) );
}
