@bs.module("node-sass") external renderSync: {..} => {..} = "renderSync"
let renderSync = filename => {
  let res = renderSync({
    "file": filename
  })
  res["css"]
}
