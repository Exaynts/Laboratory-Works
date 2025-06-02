// ShowBin.h
#include "Action.h"

class ShowBin : public Action {
public:
    ShowBin() : name("Show binary value") {}
    void Operate(AString*) override;
    const std::string& GetName() const override { return name; }
    
private:
    std::string GetBinary(AString*) const;
    std::string name;
};

extern ShowBin show_bin;