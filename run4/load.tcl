
source ps7_init.tcl
after 1000

rst -debug_sys
after 1000
fpga -f design_1_wrapper.bit
after 1000

ps7_init
after 1000
ps7_post_config
after 1000
dow u-boot.elf
after 2000
run

