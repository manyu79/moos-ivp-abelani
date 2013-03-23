#--------------------------------------------------------
# The CMakeLists.txt for:                       uFldHazardMngr
# Author(s):                              
#--------------------------------------------------------

SET(SRC
  HazardMngr.cpp
  HazardMngr_Info.cpp
  main.cpp
)

ADD_EXECUTABLE(uFldHazardMngr ${SRC})

TARGET_LINK_LIBRARIES(uFldHazardMngr
   ${MOOS_LIBRARIES}
   ufld_hazards
   geometry
   apputil
   mbutil
   ${SYSTEM_LIBS}
)

