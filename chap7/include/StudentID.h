#include <string>

class StudentID {
  private:
    std::string name;
    std::string sunet;
    int idNumber;

  public:
    StudentID();
    StudentID(std::string name, std::string sunet, int idNumber);
    ~StudentID();

    std::string getName();
    std::string getSunet();
    int getID();

    void setName(std::string name);
    void setSunet(std::string name);
    void setID(int idNumber);
};
