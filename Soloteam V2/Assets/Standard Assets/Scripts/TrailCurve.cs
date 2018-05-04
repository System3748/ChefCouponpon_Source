using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrailCurve : MonoBehaviour {
	public ParticleSystem ps ;

	// Use this for initialization
	void Start() {
		var rot = ps.rotationBySpeed;
		rot.enabled = true;

		AnimationCurve curve = new AnimationCurve();
		curve.AddKey(0.0f, 0.1f);
		curve.AddKey(0.75f, 0.6f);

		AnimationCurve curve2 = new AnimationCurve();
		curve2.AddKey(0.0f, 0.2f);
		curve2.AddKey(0.5f, 0.9f);



		rot.z = new ParticleSystem.MinMaxCurve(2.0f, curve, curve2);
	}

	// Update is called once per frame
	void Update () {
		
	}
}
