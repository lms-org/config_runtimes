#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <lms/module.h>

/**
 * @brief LMS module example
 **/
class Example : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
};

#endif // EXAMPLE_H
