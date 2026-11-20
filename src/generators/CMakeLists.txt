
set(HEADERS
GuidedParallelGenerator.h
StaticParallelGenerator.h
SynchronousGenerator.h
DynamicParallelGenerator.h
Generator.h
)

set(SOURCES
StaticParallelGenerator.cpp
SynchronousGenerator.cpp
DynamicParallelGenerator.cpp
GuidedParallelGenerator.cpp
)

target_sources(${PROJECT_NAME} PRIVATE ${SOURCES} ${HEADERS})