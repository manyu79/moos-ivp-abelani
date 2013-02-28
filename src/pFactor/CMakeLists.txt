#--------------------------------------------------------
# The CMakeLists.txt for:                       pFactor
# Author(s):                              ABelani
#--------------------------------------------------------

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
   Factor.cpp  
   Factor_Info.cpp
   main.cpp
)  

ADD_EXECUTABLE(pFactor ${SRC}	)

TARGET_LINK_LIBRARIES(pFactor
   ${MOOS_LIBRARIES}
   mbutil
   ${SYSTEM_LIBS})

