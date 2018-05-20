
#-----------------------------------------------------------------------

APP       := XData
TARGET    := XDataTest
CONFIG    := 
STRIP_FLAG:= N

MAKEDIR   := ./
COMMON    += ./ include 

PRODIR    += src sample

INCLUDE   += $(patsubst %, -I$(MAKEDIR)/%, $(COMMON))
LOCAL_SRC += $(wildcard $(patsubst %, ./%/*.cpp, $(PRODIR)))
