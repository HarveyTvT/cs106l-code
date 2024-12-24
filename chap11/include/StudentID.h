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

    std::string getName() const;
    std::string getSunet() const;
    int getID() const;

    void setName(std::string name);
    void setSunet(std::string name);
    void setID(int idNumber);

    bool operator<(const StudentID& rhs) const;

    friend bool operator<(const StudentID& lhs, const StudentID& rhs);
};
