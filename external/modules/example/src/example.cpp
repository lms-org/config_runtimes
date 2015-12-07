#include "example.h"

bool Example::initialize() {
    logger.info(config().get<std::string>("id")) << "init";
    return true;
}

bool Example::deinitialize() {
    logger.info(config().get<std::string>("id")) << "destroy";
    return true;
}

bool Example::cycle() {
    logger.info(config().get<std::string>("id")) << "cycle";

    if(cycleCounter() % 10 == 0) {
        pauseRuntime();
        resumeRuntime(config().get<std::string>("resume"));
        logger.info("switch") << config().get<std::string>("resume");
    }

    return true;
}
