#ifndef SIM_CULINARY_H
#define SIM_CULINARY_H

#include <string>
#include <vector>

// Base class
class SimCulinary {
protected:
    std::string culinarySchool;
    std::vector<std::string> cookingActivities;
    std::string trainer;

public:
    // Constructor and Destructor
    SimCulinary();
    virtual ~SimCulinary();

    // Virtual methods to be implemented by derived classes
    virtual void engage() = 0;
    virtual void pick_activity() = 0;
    virtual void guide() = 0;
};

// Derived class: CulinarySchool
class CulinarySchool : public SimCulinary {
public:
    // Methods
    void engage() override;

    // Additional methods specific to CulinarySchool (if any)
};

// Derived classes for specific activities
class EnrollInCulinaryProgram : public CulinarySchool {
public:
    void engage() override;
};

class InternAtProfessionalKitchen : public CulinarySchool {
public:
    void engage() override;
};

class ParticipateInCookingCompetition : public CulinarySchool {
public:
    void engage() override;
};

// Cooking Activities
class CookingActivities : public SimCulinary {
public:
    void pick_activity() override;
};

class Baking : public CookingActivities {
public:
    void pick_activity() override;
};

class Sautéing : public CookingActivities {
public:
    void pick_activity() override;
};

class FlavorPairing : public CookingActivities {
public:
    void pick_activity() override;
};

// Trainer-related classes
class Trainer : public SimCulinary {
public:
    void guide() override;
};

class TrainStudents : public Trainer {
public:
    void guide() override;
};

class DevelopTrainingProgram : public Trainer {
public:
    void guide() override;
};

#endif // SIM_CULINARY_H
