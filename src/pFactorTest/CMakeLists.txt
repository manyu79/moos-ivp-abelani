#--------------------------------------------------------
# The CMakeLists.txt for:                       pFactorTest
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
   FactorTest.cpp  
   FactorTest_Info.cpp
   main.cpp
)  

ADD_EXECUTABLE(pFactorTest ${SRC}	)

TARGET_LINK_LIBRARIES(pFactorTest
   ${MOOS_LIBRARIES}
   mbutil
   ${SYSTEM_LIBS})
