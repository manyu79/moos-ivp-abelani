#--------------------------------------------------------
# The CMakeLists.txt for:                       pCommunicationAngle
# Author(s):                              ABelani
#--------------------------------------------------------

# FILE(GLOB SRC *.cpp)

# Set System Specific Libraries
if (${WIN32})
  SET(SYSTEM_LIBS
    wsock32)
else (${WIN32})
  SET(SYSTEM_LIBS
    m
    pthread)
endif (${WIN32})


SET(SRC
  AcoustPair.cpp
  CommunicationAngle.cpp
  CommunicationAngle_Info.cpp
  main.cpp
)



ADD_EXECUTABLE(pCommunicationAngle ${SRC})

TARGET_LINK_LIBRARIES(pCommunicationAngle
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

