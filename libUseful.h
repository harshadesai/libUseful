#ifndef LIB_USEFUL_H
#define LIB_USEFUL_H

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#define __LIBUSEFUL_VERSION__ "3.7"
#define __LIBUSEFUL_BUILD_DATE__ __DATE__
#define __LIBUSEFUL_BUILD_TIME__ __TIME__

//__TIME__

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include "memory.h"
#include "Socket.h"
#include "UnixSocket.h"
#include "String.h"
#include "Expect.h"
#include "List.h"
#include "Stream.h"
#include "base64.h"
#include "Tokenizer.h"
#include "FileSystem.h"
#include "GeneralFunctions.h"
#include "DataProcessing.h"
#include "Hash.h"
#include "Compression.h"
#include "Time.h"
#include "Vars.h"
#include "Markup.h"
#include "PatternMatch.h"
#include "ConnectionChain.h"
#include "SpawnPrograms.h"
#include "DataParser.h"
#include "URL.h"
#include "Pty.h"
#include "Log.h"
#include "Http.h"
#include "OAuth.h"
#include "Ssh.h"
#include "Smtp.h"
#include "Terminal.h"
#include "Process.h"
#include "SecureMem.h"

#endif
