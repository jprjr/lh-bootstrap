#ifndef LOCALOPTIONS_H

#define NON_INETD_MODE 0
#define INETD_MODE 1

#define DROPBEAR_SMALL_CODE 0
#define DROPBEAR_X11FWD 0
#define DROPBEAR_BLOWFISH 0
#define DROPBEAR_TWOFISH256 0
#define DROPBEAR_TWOFISH128 0

#define DROPBEAR_DELAY_HOSTKEY 0
#define DROPBEAR_CURVE25519 1

#define DROPBEAR_DH_GROUP1 0
#define DROPBEAR_DH_GROUP16 1

#define XAUTH_COMMAND "/bin/xauth -q"
#define SFTPSERVER_PATH "/opt/dropbear/bin/sftp-server"
#define DROPBEAR_PATH_SSH_PROGRAM "/bin/dbclient"
#define DEFAULT_PATH "/command:/bin"

#endif

