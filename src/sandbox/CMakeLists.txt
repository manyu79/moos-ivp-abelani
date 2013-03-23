#--------------------------------------------------------
# The CMakeLists.txt for:                       uFldHazardMngr
# Author(s):                              
#--------------------------------------------------------

SET(SRC
  parsethings.cpp
)

ADD_EXECUTABLE(parsethings ${SRC})

TARGET_LINK_LIBRARIES(parsethings
   ${MOOS_LIBRARIES}
   ufld_hazards
   geometry
   apputil
   mbutil
   ${SYSTEM_LIBS}
)

