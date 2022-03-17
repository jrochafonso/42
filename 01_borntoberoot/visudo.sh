#
# This file MUST be edited with the 'visudo' command as root.
#
# Please consider adding local content in /etc/sudoers.d/ instead of
# directly modifying this file.
#
# See the man page for details on how to write a sudoers file.
#
Defaults        env_reset
Defaults        mail_badpass
Defaults        secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"
Defaults        requiretty
Defaults        logfile="/var/log/sudo/sudo.log"
Defaults        log_input, log_output
Defaults        passwd_tries=3
Defaults        insults
Defaults        badpass_message="please re-enter password to delete /etc/sudoers.d"

# Host alias specification

# User alias specification

# Cmnd alias specification

# User privilege specification
root            ALL=(ALL:ALL) ALL

# Allow members of group sudo to execute any command
%sudo           ALL=(ALL:ALL) ALL
jrocha-a        ALL=(ALL) NOPASSWD: /usr/local/bin/monitoring.sh

# See sudoers(5) for more information on "@include" directives:

@includedir /etc/sudoers.d
