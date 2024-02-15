#include <iostream>
#include <iostream>
#include <cereal/archives/json.hpp>
#include <cereal/types/vector.hpp>





int main() {
    cereal::JSONOutputArchive archive( std::cout );
    bool arr[] = {true, false};
    std::vector<int> vec = {1, 2, 3, 4, 5};
    archive( CEREAL_NVP(vec),
             arr );

    return 0;
}
