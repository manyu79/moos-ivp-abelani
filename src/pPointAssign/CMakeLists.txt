#--------------------------------------------------------
# The CMakeLists.txt for:                       pPointAssign
# Author(s):                              
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
  PointAssign.cpp
  PointAssign_Info.cpp
  main.cpp
)



ADD_EXECUTABLE(pPointAssign ${SRC})

TARGET_LINK_LIBRARIES(pPointAssign
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

