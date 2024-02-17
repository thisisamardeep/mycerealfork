#include <iostream>
#include <iostream>

#include <cereal/archives/json.hpp>


int main() {
    cereal1::JSONOutputArchive archive (cereal1::JSONOutputArchive::Options::Default());

    int t = 56;
    return 0;
}
