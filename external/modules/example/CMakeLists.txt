set(SOURCES
    "src/example.cpp"
    "src/interface.cpp"
)

set(HEADERS
    "include/example.h"
)

include_directories(include)
add_library(example MODULE ${SOURCES} ${HEADERS})
target_link_libraries(example PRIVATE lmscore)
