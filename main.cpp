#include <string>
#include <vector>

void digit_product() {
    int n = 2345;
    int product = 1;
    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }
    (void)product;
}

void max_of_two() {
    int a = 33, b = 57;
    int m = (a > b) ? a : b;
    (void)m;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

extern "C" int lunar_signal();
extern "C" void subtle_cove();
extern "C" void still_thicket();
extern "C" void clever_lantern();
extern "C" void cobalt_spruce();

int main() {
    digit_product();
    max_of_two();
    text_contains();
    triangular_number();
    subtle_cove();
    still_thicket();
    clever_lantern();
    cobalt_spruce();
    return lunar_signal();
}
