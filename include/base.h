#include <string>

class base {
 public:
  base(const std::string &name);
  base(std::string &&name);

 private:
  std::string name_;
};