target = "altera"
action = "synthesis"

fetchto = "../../ip_cores"

syn_device = "ep2agx125ef"
syn_grade = "c5"
syn_package = "29"
syn_top = "scu_addac"
syn_project = "scu_addac"

modules = {
  "local" : [ 
    "../../top/gsi_addac/", 
  ]
}
