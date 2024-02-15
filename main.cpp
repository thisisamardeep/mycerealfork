#include <iostream>
#include <iostream>
#include <cereal/archives/json.hpp>
#include <cereal/types/vector.hpp>

struct MyRecord {
    uint8_t x, y;
    float z;

    template<class Archive>
    void serialize(Archive &ar) {
        ar(x, y, z);
    }
};

struct SomeData {
    int32_t id;
    std::shared_ptr<std::unordered_map<uint32_t, MyRecord>> data;

    template<class Archive>
    void save(Archive &ar) const {
        ar(data);
    }

    template<class Archive>
    void load(Archive &ar) {
        static int32_t idGen = 0;
        id = idGen++;
        ar(data);
    }
};


int main() {
    cereal::JSONOutputArchive archive( std::cout );
    bool arr[] = {true, false};
    std::vector<int> vec = {1, 2, 3, 4, 5};
    archive( CEREAL_NVP(vec),
             arr );

    return 0;
}
