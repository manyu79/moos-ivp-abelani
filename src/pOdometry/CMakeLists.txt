#--------------------------------------------------------
# The CMakeLists.txt for:                       pOdometry
# Author(s):              Abhimanyu Belani, Mike Benjamin
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
   PODO_MOOSApp.cpp  
   PODO_Info.cpp
   main.cpp
)  

ADD_EXECUTABLE(pOdometry ${SRC}	)

TARGET_LINK_LIBRARIES(pOdometry
   ${MOOS_LIBRARIES}
   mbutil
   ${SYSTEM_LIBS})

