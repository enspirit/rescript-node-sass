[@bs.module "node-sass"] external renderSync: Js.t({..}) => Js.t({..}) = "renderSync";
let renderSync = filename => {
  let res = renderSync([%bs.obj {
    file: filename
  }]);
  res##css
};
