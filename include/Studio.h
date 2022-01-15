#ifndef SPL_HW1_STUDIO_H
#define SPL_HW1_STUDIO_H
#include <vector>
#include <string>
#include "Workout.h"
#include "Trainer.h"
#include "Action.h"
#include <fstream>
#include <cctype>

enum string_code {
    open,
    order,
    close,
    closeall,
    move,
    workout_options,
    status,
    mylog,
    mybackup,
    restore
};

class Studio{
public:
    Studio();
    Studio(const std::string &configFilePath);
    void start();
    int getNumOfTrainers() const;
    Trainer* getTrainer(int tid);
    const std::vector<BaseAction*>& getActionsLog() const; // Return a reference to the history of actions
    std::vector<Workout>& getWorkoutOptions();
    void closeStudio();
    ~Studio();
    void clear();
    Studio(const Studio& other);
    Studio& operator=(const Studio& other);
    Customer* buildCustomer(std::string myCustomer);
    Studio(Studio&& other);
    Studio& operator=(Studio &&other);


private:
    bool open;
    std::vector<Trainer*> trainers;
    std::vector<Workout> workout_options;
    std::vector<BaseAction*> actionsLog;
    string_code hashit (std::string const& inString);
    int create_id();


};

#endif //SPL_HW1_STUDIO_H
